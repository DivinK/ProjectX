//
//  DetailViewController.h
//  ProjectX
//
//  Created by DivinK on 2013-02-14.
//  Copyright (c) 2013 DivinK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
