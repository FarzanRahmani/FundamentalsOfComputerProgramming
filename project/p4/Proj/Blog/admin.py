from django.contrib import admin
from .models import *


# Register your models here.
admin.site.register(User)
admin.site.register(Karbar)



# Terminal --> cd  p4/Proj  --> python manage.py createsuperuser
# username : Admin (mitooni har chi bezari) --> Email address: farzanrahmani70@gmail.com
# Password : 123456789  --> Bypass password validation and create user anyway? [y/N]:
# --> y --. Superuser created successfully. -->from .models import *
# --> admin.site.Register(User)
# --> 127.0.0.1:8000/admin/ --> username va password --> login --> django administration