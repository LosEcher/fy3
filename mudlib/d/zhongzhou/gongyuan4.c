// Room: /d/yangzhou/gongyuan.c

inherit ROOM;
#include <localtime.h>
int now_time();
void create()
{
	set("short", "���ݹ�Ժ");
	set("long", @LONG
���ݹ�Ժ�����������ֵ�һ��������ÿ�³�һ��ȫ�����ص�ʿ�Ӷ����˴��Ͽ���
Ժ��������ʿ�����أ�Ҫ��д��ɲ��У�Χǽ�����������ĸ�ʾ(gaoshi).
LONG
	);
	set("no_magic", 1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhukao4.c" : 1,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "�����޿���ʿ
1.���ѿ��н�ʿ�����Ϲ����ߣ������뿼��
2.����д��δ��120���ߣ������뿼��
3.�Ǿ����߲����뿼,����������ÿ�³�һ��
4.ʹ��[exam]�������ٳ��⣬��[answer .....]�ش����⡣
5.�ش�������ʱ1����.
6.���ش𲻶ԣ�������������
7.����ʱ���뿪����������Ȩ�ۡ�
ע�� �ش�����������κα����š�
",
]));
	set("light_up", 1);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yanling2",
]));
	set("no_fight", 1);
        set("no_steal",1);
        set("no_sleep",1);

	setup();
}
int valid_leave(object me, string dir)
{
  if (dir=="south"&&me->query_temp("xxy/answer")){
  tell_room(this_object(),me->query("name")+"ҡҡͷ��̾һ���������һ��ö������!\n");
  me->delete_temp("xxy");
  me->set("xxy/last_check",now_time());
   }
        return ::valid_leave(me, dir);
}
int now_time()
{int i;
 object ob=this_player();
 mixed *local;
 local = localtime(time()*60);
 i=local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0);
 return i;
}
