//
//  SecondScreenViewController.h
//  CaelumSample
//
//  Created by Lucas Ferreira on 17/06/14.
//  Copyright (c) 2014 Lgr Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondScreenViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *sumText1;
@property (weak, nonatomic) IBOutlet UITextField *sumText2;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
- (IBAction)doSum:(id)sender;

@end
