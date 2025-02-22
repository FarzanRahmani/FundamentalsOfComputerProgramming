from django.db import models

# Create your models here.
class User(models.Model):
    #username = models.DataTimeField()
    username = models.CharField(max_length = 100 ,null = True,blank = True)
    password = models.CharField(max_length = 100 ,null = True,blank = True)

    def __str__(self):
        return self.username  #dar jaee ke ina save mishan esmeshono esm username mizare be jaye 1,2,3,...

class Product(models.Model):
                ###IntegerField
    title = models.CharField(max_length = 100,null=True,blank=True)
    description = models.CharField(max_length=100,null=True,blank=True)

# class BlogPost(models.Model):
#     text = ...
#     category = ..

class Karbar(models.Model):
    age = models.CharField(max_length = 100 ,null = True,blank = True)
    music = models.CharField(max_length = 100 ,null = True,blank = True)
    movie = models.CharField(max_length = 100 ,null = True,blank = True)
    team = models.CharField(max_length = 100 ,null = True,blank = True)
    leisure = models.CharField(max_length = 100 ,null = True,blank = True)

    # def __str__(self):    # be jaye adad esme music ro mizare   object(1) --> iran
    #     return self.music
