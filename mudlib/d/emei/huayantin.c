// Room: /u/xxy/room/huayantin
inherit ROOM;

int last_time=-10000;

void create()
{
  set ("short", "���ϱ���ͤ");
  set ("long", @LONG
ͤ��������,����Ϊͤ����һ��ͭ����(ta),����ԭ���ڶ�ü�س���
��ʥ������,������'ʥ����ͭ��',ͤǰ�����л�Ȫ,Ȫ��ֲ������ֲ��
'��º'(shu).
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"ligouyuan",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "shu" : "���������Ϲ�֮ʱ����������,�����1.7����,��Ҷ��ҩ�ü�ֵ
�����ҡ(yao)������.��������õĻ�....
",
  "ta" : "��������ͭ�Ƴ�,��5.8��,14��.�������������������4000��
������'���Ͼ�'195048��,������������:��������������ʩ��
",
]));
set("outdoors","/d/emei");
  setup();
}
void init()
{
	add_action("do_yao", "yao");
}

int do_yao(string arg)
{
    object me,ob;
    int i;

    if(arg!="shu") return 0;
    
    me=this_player(); 
    me->set_temp("yao",me->query_temp("yao")+1);

    if(me->query_temp("yao")==4)
    {
      me->set_temp("yao",0);

      i=time();
      if((i-last_time)>900)
      {
	switch( random(2) ) 
		{
			case 0:
                            ob=new(__DIR__"obj/leaf");
                            ob->move(me);
                                 message_vision(
"$N�����ر������ζ�����,��һ��,���ϵ���һƬ��Ҷ,
$N��������Ƭ��Ҷ��С������ط��뻳�С�\n", me);

				break;
			case 1:
        message_vision(
"$N�����ر������ζ�����,ͻȻ���������һ�Ŷ���,
 ���õ���$N����,�ں�����,�����ζ,��...����ʺ......��\n", me);
				break;
		}
        last_time=i;
      }
      else          
        message_vision("$Nҡ�˰�����,��һֻ��ѻ�������졣\n", me); 
           
    }
    else
      message_vision("$N����ҡ��һ��������º���˻Ρ�\n", me);
   
    return 1; 
}

int valid_leave(object me, string dir)
{
  if(dir=="east") me->delete_temp("yao");

  return ::valid_leave(me, dir);  
}

