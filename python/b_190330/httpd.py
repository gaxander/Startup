#!/usr/bin/python

from os import curdir,sep
from BaseHTTPServer import BaseHTTPRequestHandler,HTTPServer

class MyClass(BaseHTTPRequestHandler):
    def do_GET(self):
        try:
            f=open(curdir+sep+self.path)
            self.send_response(200)
            self.send_header("Content-Type",'text/html')
            self.end_headers()
            self.wfile.write(f.read())
            f.close()
        except IOError:
            self.send_error(404,'File Not Found:%s'%self.path)

def main():
    try:
        server = HTTPServer(('',8080),MyClass)
        print("Welcom to the machine listening on port 8080")
        server.serve_forever()
    except KeyboardInterrupt:
        server.socket.close()
if __name__ == '__main__':
    main()
