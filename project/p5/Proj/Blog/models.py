from django.db import models

# Create your models here. be har class ke misazim migan model ke too data base e
class User(models.Model):
    #username = models.DataTimeField()
    username = models.CharField(max_length = 100 ,null = True,blank = True)

    password = models.CharField(max_length = 100 ,null = True,blank = True)

    def __str__(self):
        return self.username
    
class Product(models.Model):
    title = models.IntegerField(max_length = 100,null=True,blank=True)
    description = models.CharField(max_length=100,null=True,blank=True)

# class BlogPost(models.Model):
#     text = ...
#     category = ..