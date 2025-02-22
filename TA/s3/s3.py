def find_oposite(curr_direction, directions, oppos_dir, start_idx):
    ''' 
        North, North, South 
        0    , 1    , 2
        =========================
        "EAST", "SOUTH", "EAST", "WEST", "NORTH" --> EAST
        0     ,  1     ,  2    , 3     , 4
        NORTH SOUTH
        NORTH WEST SOUTH 
        "SOUTH", "EAST", "WEST", "NORTH"
        SHOMA - GHARB - JONOB - 

        SHOMAL - GHARB - GHARB - SHOMAL
        SHOMAL- SHOMAL - GHARB - GHARB  
        GHARB - GHARB - SHOMAL - SHOMAL
    '''
    # jahate feli = shoma = index = 2 --> jonob az index 2 be bad
    # oppos_dir = jahate mokhalef
    # start_idx
    # directions
    # [1, 10 , 'apple'] --> len = 3
    idx = start_idx + 1
    while idx < len(directions):
        if directions[idx] == oppos_dir:
            return idx
        idx = idx + 1
    return -1


def delete_directions(result, start_idx, end_idx, directions):
    ''' NORTH - SOUTH 
        0     - 1     -'''
    if end_idx - start_idx == 1:
        return start_idx + 2
    if end_idx == -1:
        result.append(directions[start_idx])
        return start_idx + 1
    if end_idx - start_idx > 1:
        "SOUTH", "EAST", "WEST", "NORTH"
        '0     ,  1    ,  2    ,  3'
        for i in range((end_idx-start_idx)//2 + 1):
            # i = 0 --> SOUTH i , NORTH 3 - i
            # i = 1 --> EAST i  , WEST 3 - i
            if directions[start_idx + i] == 'NORTH' and directions[end_idx - i] == 'SOUTH':
                continue
            elif directions[start_idx + i] == 'SOUTH' and directions[end_idx - i] == 'NORTH':
                continue
            elif directions[start_idx + i] == 'WEST' and directions[end_idx - i] == 'EAST':
                continue
            elif directions[start_idx + i] == 'EAST' and directions[end_idx - i] == 'WEST':
                continue
            else:
                result.append(directions[start_idx])
                return start_idx + 1
        return end_idx + 1


def dirReduc(directions):
    '''
        NORTH - GHARB - JONOB
        1) "NORTH", "SOUTH"  --> hazf --> shoro = 0 , payan = 1
        2) "SOUTH", "EAST", "WEST", "NORTH" --> hazf --> shoro = 0 , payan = 3
        3) "WEST" --> append
        =============================================
        1- peida kardane index jahate feli (start)
        2- peida kardane index jahate mokhalef (end)
        3- fasele index start va end (delta)
        3-1- delta = 1 --> start = start + 2
        3-2- delta > 1 --> be sorate motegharen check konim --> 3-2-1) pattern = true | start = end + 1 --> 3-2-2) pattern = false | append, start += 1
        3-3- end = -1 --> append konim --> start += 1
    '''
    result = []  # javabamon
    start_idx = 0
    while start_idx < len(directions):
        curr_direction = directions[start_idx]  # shoroe baze hazf
        if curr_direction == "NORTH":
            end_idx = find_oposite(
                curr_direction, directions, 'SOUTH', start_idx)
            start_idx = delete_directions(
                result, start_idx, end_idx, directions)
        if curr_direction == 'EAST':
            end_idx = find_oposite(
                curr_direction, directions, 'WEST', start_idx)
            start_idx = delete_directions(
                result, start_idx, end_idx, directions)
        if curr_direction == 'SOUTH':
            end_idx = find_oposite(
                curr_direction, directions, 'NORTH', start_idx)
            start_idx = delete_directions(
                result, start_idx, end_idx, directions)
        if curr_direction == 'WEST':
            end_idx = find_oposite(
                curr_direction, directions, 'EAST', start_idx)
            start_idx = delete_directions(
                result, start_idx, end_idx, directions)
    return result


'''
    x = ['apple', 2, 10]
    x[0] = 'apple'
'''
