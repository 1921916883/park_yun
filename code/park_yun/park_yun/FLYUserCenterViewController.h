//
//  FLYUserCenterViewController.h
//  park_yun
//
//  Created by chen on 14-7-9.
//  Copyright (c) 2014年 无线飞翔. All rights reserved.
//

#import "FLYBaseViewController.h"

@interface FLYUserCenterViewController : FLYBaseViewController<UITableViewDataSource,UITableViewDelegate,UIActionSheetDelegate>{
    UIView *_topView;
    
    //默认车牌号
    UILabel *_carNoLabel;
    
    UILabel *_balanceLabel;
    
    UIButton *_carBtn;
    
    UIActivityIndicatorView *_spinner;
    
    UITableView *_tableView;
    
    UIButton *msgBadgeBtn;
    
    UIButton *couponBadgeBtn;
}
@property (weak, nonatomic) IBOutlet UIView *middleView;
@property (weak, nonatomic) IBOutlet UIScrollView *scroolView;

- (IBAction)billAction:(id)sender;
- (IBAction)memberInfoAction:(id)sender;
- (IBAction)rechargeAction:(id)sender;
- (IBAction)footmarkAction:(id)sender;
- (IBAction)collectAction:(id)sender;
- (IBAction)offlineMapAction:(id)sender;

@end
