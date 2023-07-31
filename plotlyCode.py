# Import required libraries
import pandas as pd  # For data manipulation and analysis
import plotly.express as px  # For creating interactive visualizations

# Load data from a CSV file into a DataFrame
data = pd.read_csv("soil_moisture_data.csv")

# Create a line plot using Plotly Express
# Specify 'Time' as the x-axis and 'SoilMoisture' as the y-axis
# Set the title of the graph to 'Soil Moisture Levels Over Time'
fig = px.line(data, x='Time', y='SoilMoisture', title='Soil Moisture Levels Over Time')

# Display the graph
fig.show()
