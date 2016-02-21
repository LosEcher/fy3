// lu:hall.c
#include <localtime.h>

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����ǹ���ׯ���µĴ����������ռ�ؼ��㣬������ʮ��ƽ�ס�����
���ĸ�һ�˶����������Ĵ�ʯ��������һ�����ϻ��и�����������ӡ����
������һ��̫ʦ�Σ����Ը���ʮ�������ӣ������Ӷ����Ϻõĺ��ľ�Ƴ�
�ģ�������Ϊ���̫ʦ�κ������Ź����������⸣»�����ɣ���������
С�۰��ϸ�ĺ����򡣴�����������ׯ�����鷿�������ǹ���ׯ����⣬
������ׯ�������ң������������������������䳡��
LONG
	);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/lu_guanying" :  1,
	]));

	set("detail", ([ /* sizeof() == 1 */
		"����ӡ" : "�������ӡ��˵��ׯ����ʦ��÷����ͽ����߹ֵĵ��ӹ�������ʱ���µġ�\n",
]));

	set("exits", ([ /* sizeof() == 5 */
		"east" : __DIR__"weapon_room",
		"west" : __DIR__"bookroom",
		"north": __DIR__"bedroom",
		"south": __DIR__"square",
       	"northeast": __DIR__"pharmacy",
	]));

	set("outdoors", "lu_town");

      set("valid_startroom", 1);
	setup();
//	replace_program(ROOM);
//	load_object("/daemon/board/lu_b");
	"/obj/board/luboard"->foo();

}

int valid_leave(object me, string dir)
{
  mapping gt;
  object ob;

  gt = NATURE_D->game_time(1);
/*
  if((gt[LT_HOUR] <=6 )||(gt[LT_HOUR] >=22)) 
  {
    if(dir=="west") 
      return notify_fail("�㷢���鷿�����Ѿ����������ˣ������ȥ��\n");
    if(dir=="north") 
      return notify_fail("�㷢�����ҵ����Ѿ����������ˣ������ȥ��\n");
  }
*/

  ob = present("lu", this_object());
  if( objectp(ob) && ob->is_npc() )
  {
 // by musix  if((dir!="south")&&((string)me->query("class")!="taohua")) 
       if((dir!="south")&&((string)me->query("family/family_name")!="�һ���"))
      return notify_fail("½��ׯ��˫��һ�����������ȥ��˵�����㲻���һ�������,���ܽ�ȥ��\n");
  }
  
  if(dir=="northeast")
    me->set_temp("kick",0); 

  return ::valid_leave(me, dir);  
}
