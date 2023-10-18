## 内存不释放的问题

全部代码已提交, 克隆之后可直接运行

### 内存不释放的问题
tenon-vue项目, npm run dev 后, 将component-button下app.vue的点击事件代码改为跳自己, 如下:
```
    handleClickBtn(msg) {
      Toast.show(msg);
      let pageInfo = {
        id: '111',
        // url: 'hummer://UPPayOneTrava',
        url: 'component-button.js',
        animated: true,
        params: {
          aaa: 111,
          bbb: 222,
        }
      };
      Navigator.openPage(pageInfo, (result) => {
        console.log('Page result: ' + JSON.stringify(result));
      });
    },
```

即可观察到内存不释放的问题
