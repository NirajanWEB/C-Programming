<?php
 $host = "localhost";
 $dbUsername = "root";
 $dbPassword = "";
 $dbname = "logindb";
 //create connection
 $conn = new mysqli($host, $dbUsername, $dbPassword, $dbname);
 
//  $username = $_POST['username'];
//  $paswsord = $_POST['password'];
 if (mysqli_connect_error()) {
  die('Connect Error('. mysqli_connect_errno().')'. mysqli_connect_error());
 } else 
 {
    
    $stmt = $conn->prepare("INSERT INTO login(username, password) VALUES (?, ?)");
    $stmt->bind_param("ss", $username, $password);
  
    $username = $_POST['username'];
    $password = $_POST['password'];
    $stmt->execute();
 
    
    echo "success";
 }
    $stmt->close();
    $conn->close();
?>