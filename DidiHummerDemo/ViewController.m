//
//  ViewController.m
//  DidiHummerDemo
//

#import "ViewController.h"
#import <Hummer/HMViewController.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view.
  
  self.view.backgroundColor = [UIColor yellowColor];
  
  UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
  [btn setTitle:@"Hummer" forState:UIControlStateNormal];
  [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
  btn.backgroundColor = [UIColor redColor];
  [btn addTarget:self action:@selector(hmrDidTapped1) forControlEvents:UIControlEventTouchUpInside];
  [self.view addSubview:btn];
  btn.frame = CGRectMake(100, 200, 100, 80);
}

- (void)hmrDidTapped1 {  
  HMViewController *vc = [[HMViewController alloc] initWithURL:@"http://localhost:8000/component-button.js" params:nil];
  [self.navigationController pushViewController:vc animated:YES];
}

@end
