// 这是一个demo，没啥意思

   
   // 发起draw()的"发号者"在ViewRoot.java里的performTraversals()方法， 
   // 该方法会继续调用draw()方法开始绘图
   private void  draw(){
	   View mView  ;
       mView.draw(canvas) ;  
   }
   
   //回调View视图里的onLayout过程 ,该方法只由ViewGroup类型实现
   private void draw(Canvas canvas){
	   //该方法会做如下事情
	   //1、绘制该View的背景
	   //2、为绘制渐变框做一些准备操作
	   //3、调用onDraw()方法绘制视图本身
	   //4、调用dispatchDraw()方法绘制每个子视图
	   //5、绘制渐变框	
   }
   
   @Override
   protected void dispatchDraw(Canvas canvas) {
	   //其实现方法类似如下：
	   int childCount = getChildCount() ;
	   for(int i=0 ;i<childCount ;i++){
		   View child = getChildAt(i) ;
		   //调用drawChild完成
		   drawChild(child,canvas) ;
	   }	   
   }

   protected void drawChild(View child,Canvas canvas) {
	   //简单的回调View对象的draw()方法，不断递归直到完成
	   child.draw(canvas) ;
   }
```





