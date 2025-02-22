from django.db import models

# Create your models here.
class User(models.Model):
    #username = models.DataTimeField()
    username = models.CharField(max_length = 100 ,null = True,blank = True)

    password = models.CharField(max_length = 100 ,null = True,blank = True)

class Product(models.Model):
    title = models.IntegerField(max_length = 100,null=True,blank=True)
    description = models.CharField(max_length=100,null=True,blank=True)

# class BlogPost(models.Model):
#     text = ...
#     category = ..