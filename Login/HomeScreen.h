

#import <UIKit/UIKit.h>

@interface HomeScreen : UIViewController
{
    
    NSString *temp;
}
- (IBAction)goBackButton:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *textbox;
@property (retain, nonatomic) NSString *temp;
@end
