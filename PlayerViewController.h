#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayerViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
