//
//  NOSDetailViewController.h
//  ControllingSource
//
//  Created by Luca on 29/08/14.
//  Copyright (c) 2014 Luca Giordano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NOSDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
