//
//  ViewController.h
//  CoreDataLearn
//
//  Created by 王双龙 on 2017/7/6.
//  Copyright © 2017年 王双龙. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

