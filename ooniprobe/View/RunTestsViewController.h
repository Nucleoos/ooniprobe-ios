// Part of MeasurementKit <https://measurement-kit.github.io/>.
// MeasurementKit is free software. See AUTHORS and LICENSE for more
// information on the copying conditions.

#import <UIKit/UIKit.h>
#import "TestInfoViewController.h"
#import "TestStorage.h"
#import "UIView+Toast.h"
#import "RunButton.h"
#import "PBRevealViewController.h"
#import "Tests.h"
#import "UIBarButtonItem+Badge.h"
#import "AppDelegate.h"

@interface RunTestsViewController : UITableViewController {
    Tests *currentTests;
}

@end
