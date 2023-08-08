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
```

# API Configuration
# JavaScript API Configuration Example

This example demonstrates how to configure and make API requests using JavaScript.

```javascript
// Define the API base URL
const apiBaseUrl = 'https://api.example.com';

// Configure API headers
const headers = {
    'Content-Type': 'application/json',
    'Authorization': 'Bearer YourAccessTokenHere'
};

// Function to make a GET request to the API
async function fetchData(endpoint) {
    try {
        const response = await fetch(apiBaseUrl + endpoint, {
            method: 'GET',
            headers: headers
        });

        if (!response.ok) {
            throw new Error(`HTTP error! Status: ${response.status}`);
        }

        const data = await response.json();
        return data;
    } catch (error) {
        console.error('Error fetching data:', error);
    }
}

// Example usage
const endpoint = '/posts';
fetchData(endpoint)
    .then(data => {
        console.log('API Response:', data);
    });
```
