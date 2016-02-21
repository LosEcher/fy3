// Room: /u/xxy/room/xixiang
inherit ROOM;

void create ()
{
  set ("short", "���³�");
  set ("long", @LONG
���³�,���Ƹ�ˬ,���·�����,չ��ƽ��,һ������,�˴�ԭ��
һ����ȻˮȪ,������ɮ�˰ѳ���(quan)�����������,�رߵ���ʯ
��,��һ����ֵĴ����ӡ,��˵,���������ɽ,���ڳ��м�ˮϴ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/monkey.c" : 1,
]));
set("outdoors","/d/emei");
  set("item_desc", ([ /* sizeof() == 1 */
  "quan" : "ÿ������֮ʱ,��ˮ���Ǳ̳γε�û��һ˿�紵������,���
��Ӱ,ǡ��һ����Ͼ������,���ڳ�ˮ�м�,�����������'���ҹ��'.
��ˮ�峺�ޱ�,�������Ժ�(drink).
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"fohushi",
  "northup" : __DIR__"uproad",
]));

  setup();
}
void init()
{
    add_action("do_drink", "drink");
    add_action("do_jump","jump");
}

int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="water")&&(sss!="quan"))
   return 0;
 say(ob->query("name")+"ſ��ˮ�رߣ�һ�������˹���. \n");
 tell_object(ob,"��ſ��ˮ�رߣ�һ�������˹���. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }
int do_jump(string arg)
{
    if(arg!="down") return 0;
 
    message_vision("����һ������,$N˫�ֻ����ŵ������ĳ�ˮ�С�\n", this_player());
    this_player()->move(__DIR__"shuitan"); 

    return 1;
}
