
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *appleID;
@property (weak, nonatomic) IBOutlet UITextField *password;
- (IBAction)loginButton:(id)sender;

@end
