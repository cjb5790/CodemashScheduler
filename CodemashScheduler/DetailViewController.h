//
//  DetailViewController.h
//  CodemashScheduler
//
//  Created by Aztek Air on 10/29/13.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
