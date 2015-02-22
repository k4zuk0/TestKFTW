<?hh

use KFTWApp\App;

class TestApp extends App {
    public function listBundles() {
        $bundles = [
            new \TestKFTW\TestBundle\TestKFTWTestBundle(),
        ];

        return $bundles;
    }
}
