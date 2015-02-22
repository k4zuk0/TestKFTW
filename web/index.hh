<?hh

$loader = require_once __DIR__."/../vendor/autoload.php";
//require_once __DIR__."/../app/TestApp.hh";

use KFTW\Http\Request;

$app = new TestApp(new Request($_GET, $_POST, $_SERVER, $_COOKIE, $_FILES));
$app->load();
