// Room: /u/swordman/yangzhou/zhifutang
inherit ROOM;

void create ()
{
  set ("short", "֪������");
  set ("long", @LONG
����������ݸ����ã�������ǰ����һλ�ɷ���ǵ����ˣ�������
����֪���������ĺ��Ĵ��ĺ�--ŷ���ޡ�ŷ���������԰����������ڣ�
�������ܵõ�������ʶ�����������ˡ���ǰ��Ŀ�Ĵ����ǡ��ྲ����
LONG);

  set("light_up", 1);
set("no_fight",1);
set("no_magic",1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yamen",
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/ouyangxiu" : 1,
  __DIR__"npc/yayi" : 2,
]));

  setup();
}
