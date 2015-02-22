<?hh

namespace TestKFTW\TestBundle;

use KFTW\Bundle\Bundle;

class TestKFTWTestBundle extends Bundle {
    public function __construct() {
        parent::__construct();
        
        $this->setRoutes([
            'test' => ['Test', 'cc'],
            'bullshit' => ['Test', 'bullshit']
        ]);
    }
}