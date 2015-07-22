//
//  SSCalendarCollectionViewCell.h
//  
//
//  Created by Iuri Chiba on 7/16/15.
//
//

#import <UIKit/UIKit.h>

@class SSCalendarCollectionViewCell;
@class SSRippleButton;

#pragma mark - Protocols

@protocol SSCalendarCollectionViewCellDelegate <NSObject>

- (void)cellClicked:(SSCalendarCollectionViewCell *)cell;

@end

@protocol SSRippleButtonDelegate <NSObject>

- (void)buttonClicked;

@end

#pragma mark - Classes

@interface SSCalendarCollectionViewCell : UICollectionViewCell <SSRippleButtonDelegate>

@property (strong, nonatomic) id<SSCalendarCollectionViewCellDelegate> delegate;
@property (strong, nonatomic) NSDate *cellDate;
@property (strong, nonatomic) SSRippleButton *innerButton;
@property (strong, nonatomic) UIView *selectionIndicator;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL headerMode;

- (void)selectCalendarCell:(BOOL)selected;
- (void)disableCalendarCell:(BOOL)disabled;
- (void)calendarCellSetup;

@end

@interface SSRippleButton : UIButton

@property (nonatomic) IBInspectable BOOL shouldChangeColorOnClick;

#pragma mark - Delegate
@property (strong, nonatomic) id<SSRippleButtonDelegate> delegate;

#pragma mark - Ripple
@property (strong, nonatomic) UIView *rippleBackgroundView;
@property (strong, nonatomic) UIView *rippleView;

@end