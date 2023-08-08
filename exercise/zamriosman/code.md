# PHP Login Page Example

This example demonstrates a basic login page using PHP.

```php
<!DOCTYPE html>
<html>
<head>
    <title>Login Page</title>
</head>
<body>

<?php
session_start();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $password = $_POST['password'];

    // Replace these with your actual username and password validation logic
    if ($username == 'admin' && $password == 'password123') {
        $_SESSION['username'] = $username;
        header("location: welcome.php");
    } else {
        $error = "Invalid username or password.";
    }
}
?>

<h2>Login Page</h2>
<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    <label for="username">Username:</label>
    <input type="text" id="username" name="username"><br><br>
    <label for="password">Password:</label>
    <input type="password" id="password" name="password"><br><br>
    <input type="submit" value="Login">
</form>

<?php if (isset($error)) { echo "<p>$error</p>"; } ?>

</body>
</html>
