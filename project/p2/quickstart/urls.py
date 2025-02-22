from django.urls import path
#path = masir ha ro beham vasl mikone
from . import views

urlpatterns = [
    path('', views.index, name='index'),   
]