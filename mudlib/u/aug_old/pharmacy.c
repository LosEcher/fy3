// lu:pharmacy.c
// 97.9.16

inherit ROOM;

#include <ansi.h>

int last_time=-10000;

void create()
{
	set("short", "������");
	set("long", @LONG
������½ׯ���������������������������ɫ���������¯�����ܶ�
���Ÿ��ָ��������ҩ�ġ���Ϊ¯�����ղ�Ϩ���������������������ƣ�
ƽ��һ���������ա���ҩʦ�ľ�����¶��������������˵½ׯ��Ҳ������
ֻ��ԭ��������Ʒ�����ׯ�����������ˡ�
LONG
	);

//	set("objects", ([ /* sizeof() == 2 */
//		"/obj/npc/di_pi" :  1,
//		"/obj/npc/punk": 1,
//	]));

	set("detail", ([ /* sizeof() == 1 */
		"����¯" : 
"���Ǹ���ͭ����¯�������е���ͷ�ˡ�¯�������ŵ�ҩ��
¯�����и���ӡ��Ҳ��֪��˭�ߵġ�\n",
]));

	set("exits", ([ /* sizeof() == 1 */
		"southwest" : __DIR__"hall",
	]));

	set("outdoors", "lu_town");

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_kick", "kick");
}

int do_kick(string arg)
{
    object me,ob;
    int i;

    if(arg!="����¯") return 0;
    
    me=this_player(); 
    me->set_temp("kick",me->query_temp("kick")+1);

    if(me->query_temp("kick")==9)
    {
      me->set_temp("kick",0);

      i=time();
      if((i-last_time)>900)
      {
        ob=new(__DIR__"obj/jiuhua");
        ob->move(me);
         
        message_vision(
"¯�ӱ�$N�߿��ˣ�$N��������¯����һ�ŷ����˱ǵ�"+HIM+"������¶��"+NOR+"��
$N������������ҩ���ٰ�¯�ӷ�����\n", me);
        last_time=i;
      }
      else          
        message_vision("¯�ӱ�$N�߿��ˣ���$Nû�з���ʲô��$N�ְ�¯�ӷ����ˡ�\n", me); 
           
    }
    else
      message_vision("$N����һ������¯��¯�ӻ��˻Ρ�\n", me);
   
    return 1; 
}

int valid_leave(object me, string dir)
{
  if(dir=="southwest") me->delete_temp("kick");

  return ::valid_leave(me, dir);  
}
