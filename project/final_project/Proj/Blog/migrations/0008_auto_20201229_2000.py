# Generated by Django 3.1.3 on 2020-12-29 16:30

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Blog', '0007_auto_20201228_2243'),
    ]

    operations = [
        migrations.AlterField(
            model_name='poems_user',
            name='poem',
            field=models.TextField(blank=True, max_length=200, null=True),
        ),
    ]
