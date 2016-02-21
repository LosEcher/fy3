// Room: /u/swordman/yangzhou/shuyuan
inherit ROOM;

#include <localtime.h>;
int now_time();
void create ()
{
  set ("short", "������Ժ");
  set ("long", @LONG
��ǰ����������Բ������������ɫ���ַ�������עĿ[������Ժ]������
��ʱ�ش���ѧ��������ٴ�Ķ�����������Ҳ�ǿ�ͯ���ĵط������ߵ�Ժǽ
������һ�Ÿ�ʾ(gaoshi)��
LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/kaoguan" : 1,
  __DIR__"npc/shutong.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ddajie",
]));
  set("outdoors", "y");
  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "�����޿�ͯ��
1.���ѿ���ͯ�������Ϲ����ߣ������뿼��
2.����д��δ��10���ߣ������뿼��
3.ʹ��[exam]�������ٳ��⣬��[answer .....]�ش����⡣
4.���ش𲻶ԣ�������������
5.����ʱ���뿪����������Ȩ�ۡ�
ע�� �ش�����������κα����š�

",
]));
  set("no_magic", 1);
  set("no_fight", 1);

  setup();
}
int valid_leave(object me, string dir)
{
  if (dir=="west"&&me->query_temp("xxy/answer")){
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

