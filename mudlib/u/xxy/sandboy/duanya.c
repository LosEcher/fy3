// Room: /d/sandboy/duanya 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "断崖");
  set ("long", @LONG
断崖之前，已然前无去路。崖前有一片数十丈方圆的平地，环生着十
馀株巨松.一松特高，宛如撑伞，馀荫了两叁丈方圆一片草地.枝叶浓密，
看不到树上的景物。
LONG);

  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
    object ob;
    ob=this_player();
    remove_call_out("greeting");
    call_out("greeting",30,ob);
}
void greeting(object ob)
{
     object ob1;
   if (!present("chair",this_object()))
         {
           write("只听巨松上豁啦一声，一张椅子晃晃荡荡落了下来!\n");
           ob1=new(__DIR__"obj/chair");
           ob1->move(this_object());
         }
    remove_call_out("get_down");
    call_out("get_down",7,ob);
    return;
}
void get_down(object ob)
{
    object ob1;
    if (!present("hua yikun",this_object()))
       {
       write("巨松上有人哈哈一笑，跃了下来，正好坐于虎皮金蛟椅上!\n");
       ob1=new(__DIR__"npc/huayikun");
       ob1->move(this_object());
       }
    return;
}
           