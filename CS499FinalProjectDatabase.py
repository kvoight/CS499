import json
from bson import json.util
from pymongo import MongoClient
import bottle
from bottle import route, run, request, abort

connection = MongoClient('localhost', 27017)
db = connection['myDB']
collection = db['myCollection']

app = Bottle()

#Add Document to Database
def insert_document(document):
  try:
  result = collection.save(document)
  except ValidationError as ve:
  abort(400, str(ve))
  return result

def main():
  myDocument = {"keyName"v : "test value data"}
  
print insert_document(myDocument)
  
main()
connection = MongoClient('localhost', 27017)
db = connection['city']
collection = db['Mileston']
def Read():
	try:         
		result = db.research.find({"business_name"})  
	except ValidationError as ve:
             		abort(400, str(ve))
	return result
def 
	readDocument = {"business_name"}
	print readDocument	
Read()

#Update Document to Database
def updateDocument():
try:
  updateMyDocument = collection.update(document)
  except ValidationError as ve:
    abort(400, str(ve))
  return updateMyDocument
def Update():
myDocument = {"keyName" : "Test Data"}
print updateDocument()

#Delete Document Database
def deleteDocument():
  try:
    DeleteMyDocument = db.collection.deleteOne()
  except ValidationError as ve:
    abort(400, str(ve))
  return DeleteMyDocument
def DeleteDoc():
  print deleteDocument()

#Perform RESTful GET Functionality
@route('/currentTime', method='GET')
  def get_currentTime():
  dateString=datetime.datetime.now().strftime("%Y-%m-%d")
  timeString=datetime.datetime.now().strftime("%H:%M:%S")
  string="{\"date\":"+dateString+",\"time\":"+timeString+"}"
  return json.loads(json.dumps(string, indent=4, default=json_util.default))
@app.route('/http://localhost/hello?name=”world”/')
def hello():
  return "Hello World!"
  run(host='localhost', port=8080)

#Perform RESTful Post Functionality
@post('/http://localhost/strings/', method='POST')
def Hello2():
  string1 = 'first: "hello"'
  string2 = 'second: "world"'
  return {string1, string2}
  run(host='local', port=8080)