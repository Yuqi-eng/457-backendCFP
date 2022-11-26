from flask import Flask
from flask import request

# Flask Constructor
app = Flask(__name__)

# decorator to associate
# a function with the url
@app.route("/", methods=['GET', 'POST'])
def showHomePage():
	# response from the server
	return "This is home page"

@app.route("/classify", methods=["POST"])
def debug():
    num=int(request.form["value"])
    print(num)
    if num==0:
        return "Everything is fine"
    if num==1:
        return "Near Fall is detected"
    if num==2:
        return "Fall is detected"

if __name__ == "__main__":
    app.run(host="0.0.0.0")

