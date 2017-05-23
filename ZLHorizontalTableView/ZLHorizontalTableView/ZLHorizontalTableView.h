//
//  ZLHorizontalTableView.h
//  ZLHorizontalTableView
//
//  Created by 李彦瑾 on 2017/5/23.
//  Copyright © 2017年 李彦瑾. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLHorizontalTableView : UIScrollView

@property (nonatomic, weak) id <UITableViewDataSource> dataSource;
@property (nonatomic, weak) id <UITableViewDelegate> delegate;

- (void)reloadData;

@end


