//
//  _LR4NFPD9GViewController.h
//  S3Uploader
//
//  Created by Matthew on 2/10/13.
//  Copyright (c) 2013 dukecs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface _LR4NFPD9GViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
- (IBAction)pickAnImage:(id)sender;
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;





@end
