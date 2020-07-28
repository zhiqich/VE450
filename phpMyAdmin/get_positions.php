<?php
$servername = "/cloudsql/graphic-outlook-279320:us-central1:ji-450-6";
$username = "root";
$password = "Demian1973";
$dbname = "450";
$id = $_GET["id"];

$conn = new mysqli(null, $username, $password, $dbname, null, $servername);

if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT x, y, z FROM positions WHERE id = $id";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
  while($row = $result->fetch_assoc()) {
    echo $row["x"]. ", " . $row["y"]. ", " . $row["z"];
  }
} else {
  echo "***";
}
$conn->close();