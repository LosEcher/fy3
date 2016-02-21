// Room: /u/swordman/yangzhou/jiulou.c

inherit ROOM;

void create ()
{
  set ("short", "���ݾ�¥");
  set ("long", @LONG
��ҿ�ջ�������ݳ����ģ���������ǳ���¡����֮��Ǯ������
���ǳ�������ο���ŵ���ѡ��¶������߰������ӣ����̾����˵
���ڴ˽������������ﲻ�����������õ�С�������ػ��д����ķ�
���͡���¥���ǿͷ���
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"nandaj2",
  "up" : __DIR__"sleeproom",
]));
  set("no_magic", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/chike" : 1,
  __DIR__"npc/gou.c" : 1,
  __DIR__"npc/xiaoer.c" : 1,
]));

  setup();
}
