#!/usr/bin/env python

from flask import Flask 
from flask import render_template, redirect, url_for
from flask import request

app = Flask(__name__)

@app.route('/slcshttp/service', methods = ['POST','GET'])
def login():
    if request.method == 'POST':
        print(request.headers)
        print(request.data)
        print(len(request.data))
        if request.data:
            print(request.data)
        return "nanjingnan"

if __name__ == '__main__':
    app.debug = True
    app.run('0.0.0.0',8080)
