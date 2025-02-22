from django.shortcuts import render
from django.http.response import HttpResponse 
from .models import * 
#from .models import User

# Create your views here.

def index(request):  #hammon index.html ee
    return render(request,'index.html')

def form(request):
    if request.method == "GET" :
        print("{}".format(request.method))
        mylist = User.objects.all()
        mylist = {"data" : mylist}
        #mylist = {"your_name" : "hallo world","my_items":["item1","item2","item3"]}
        return render(request, 'form.html',context = mylist)

    elif request.method == "POST" :
        print("hello post request")
        # print("{}".format(request.POST["username"]))
        b = int((request.POST["int"]))
        #User...(username="ali")
        mlist = print_odds(b)
        mylist = {"adad" : mlist}


        # a = User.objects.Create(username= request.POST["username"],password= request.POST["password"])

        # a = User.objects.get(username = request.POST["username"])
        # a = list(a)

        # a = User.objects.last()
        # User.objects.filter(username = request.POST["username"])
        
        #print(type(a))
        #dir(a)

        # context  = {"data": a.username or (a)}
        # return render(request, 'form.html',context = mylist)



        return render(request, 'form.html',context = mylist)


        # return HttpResponse("{}".format(request.POST['user_username']))
        # return HttpResponse("aroom nemigigirim")

def feedback(request):
    if request.method == "GET" :
        return render(request,'feedback.html')
    if request.method == "POST" :
        Karbar.objects.create(age= request.POST["age"],music= request.POST["music"],movie=request.POST["movie"],team=request.POST["team"],leisure=request.POST["leisure"])
        #zakhire etelaaat dar model karbar

        b = []
        b.append(request.POST["age"])
        b.append(request.POST["music"])
        b.append(request.POST["movie"])
        b.append(request.POST["team"])
        b.append(request.POST["leisure"])
        #mishod injoori ham nevesh --> [request.POST["age"],request.POST["music"],request.POST["movie"],request.POST["team"],request.POST["leisure"]]

        dic  = {"data": b}                  # hala mitoni az dic dar answers.html estefade koni
        return render(request,'answers.html', context = dic)




def print_odds(a):
    x = []
    for i in range(a):
        if i % 2 == 1 :
            x.append(i)
    return x

            
