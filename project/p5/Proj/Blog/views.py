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
        a = User.objects.all()
        mylist = {"data" : a}
        #mylist = {"your_name" : "hallo world","my_items":["item1","item2","item3"]}
        return render(request, 'form.html',context = mylist)

    elif request.method == "POST" :
        print("hello post request")
        User.objects.Create(username= request.POST["username"],password= request.POST["password"])
        a = User.objects.last()
        context  = {"data": a} 
        return render(request, 'form.html',context = context)

        # # print("{}".format(request.POST["username"]))
        # b = int((request.POST["int"]))
        #User...(username="ali")
        # mlist = print_prime(b)
        # mylist = {"adad" : mlist}
        # a = User.objects.get(username = request.POST["username"])
        # a = list(a)
        # User.objects.filter(username = request.POST["username"])
        #print(type(a))
        #dir(a)
        # a or a.username 
        # return render(request, 'form.html',context = mylist)
        # return HttpResponse("{}".format(request.POST['user_username']))
        # return HttpResponse("aroom nemigigirim")
# def print_prime(a):
#     x = []
#     for i in range(a):
#         if i % 2 == 1 :
#             x.append(i)
#     return x

def modernform(request):
    if request.method == "GET":
        return render(request, "modernform.html")
            
# inaro to ye shell mizanim ta faghat yebar user_pishfarz besaze            for i in range(10):
#                                                                               usernam = "ali{}".format(i)
#                                                                               passw = "11{}".format(i)
#                                                                               User.objects.create(username= usernam, password=passw)

#shell_e_django = python manage.py shell (ba exit mirim biroon) (kohod python khali ham dare vali baraye django save mishe)
# to ye sjell mizanim ta inke har bar nayad 10 ta ali besaze
#from Blog.models import *
