//
//  MeInfoViewController.h
//  tongbao
//
//  Created by 蒋秉洁 on 16/3/14.
//  Copyright © 2016年 ZX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MeInfoViewController : UITableViewController<UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate,UINavigationControllerDelegate,UIImagePickerControllerDelegate>


@property (strong, nonatomic) IBOutlet UITableView *tableview;

@end