//
//  ViewController.h
//  s3-objectiveC
//
//  Created by Lohit Talasila

#import <UIKit/UIKit.h>
#import "AWSCore.h"
#import "AWSS3.h"

@interface ViewController : UIViewController < UIImagePickerControllerDelegate, UINavigationControllerDelegate >

@property (nonatomic, strong) IBOutlet UIImageView *selectedImage;
@property (nonatomic) UIImagePickerController *imagePickerController;
@property (nonatomic, strong) UIView *loadingBg;
@property (nonatomic, strong) UIView *progressView;
@property (nonatomic, strong) UILabel *progressLabel;

@property (nonatomic) uint64_t filesize;
@property (nonatomic) uint64_t amountUploaded;


- (IBAction)cameraBtnClicked:(id)sender;
- (IBAction)galleryBtnClicked:(id)sender;
- (IBAction)uploadBtnClicked:(id)sender;

@end

