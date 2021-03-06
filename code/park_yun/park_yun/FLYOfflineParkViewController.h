//
//  FLYOfflineParkViewController.h
//  park_yun
//
//  Created by chen on 14-8-1.
//  Copyright (c) 2014年 无线飞翔. All rights reserved.
//

#import "FLYBaseViewController.h"
#import "FLYCityParkCell.h"

@interface FLYOfflineParkViewController : FLYBaseViewController<UITableViewDataSource,UITableViewDelegate,FLYOfflineParkDelegate>{
    UITextField *_searchText;
    UIButton *_searchBtn;
    
    UISegmentedControl *_segment;
    
    UIView *_cityView;
    UIView *_downloadView;
    
    UITableView *_cityTableView;
    UITableView *_downloadTableView;
    
    NSMutableArray *_cityData;
    NSMutableArray *_downloadData;
    
    //下载游标
    NSMutableDictionary *_cursorDic;
}

- (IBAction)backgroupTap:(id)sender;


@end
