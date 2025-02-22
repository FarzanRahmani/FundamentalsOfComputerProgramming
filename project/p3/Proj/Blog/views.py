from django.shortcuts import render
from django.http.response import HttpResponse 
from .models import * 
#from .models import User

# Create your views here.

def index(request):
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
        mlist = print_prime(b)
        mylist = {"adad" : mlist}


        # a = User.objexts.Create(username= request.POST["username"],password= request.POST["password"])
        # context  = {"data": a.username}
        # return render(request, 'form.html',context = mylist)



        return render(request, 'form.html',context = mylist)


        # return HttpResponse("{}".format(request.POST['user_username']))
        # return HttpResponse("aroom nemigigirim")

def print_prime(a):
    x = []
    for i in range(a):
        if i % 2 == 1 :
            x.append(i)
    return x

            
