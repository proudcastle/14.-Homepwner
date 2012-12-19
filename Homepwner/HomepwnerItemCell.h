//
//  HomepwnerItemCell.h
//  Homepwner
//
//  Created by Markus Stolzenburg on 18.12.12.
//
//

#import <UIKit/UIKit.h>

@interface HomepwnerItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;


@end
