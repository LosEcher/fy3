// Room: /u/swordman/yangzhou/ycsz
inherit ROOM;

void create ()
{
  set ("short", "���ɽׯ");
  set ("long", @LONG
���ɽׯ�����ɻ�ɽׯ���������Ϊÿ���ļ���ׯ�ںɻ�
���ص�ԭ�ʰɡ�ԭ�����������ݴ����̺������˽լ��������
ҵû�䣬������κ󱻵����ĺ��������ݰ˹֡�֮�׵�--֣��
�����á���ͳػӺ�ϴī��������Ի�����ɽׯ����ׯ�д���
��ӳ����ˮ����������ī�ͳ���̸�ڴˣ��ֶ�������������һ
Ƭ�����֡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xijie2",
  "south" : __DIR__"ycsz1",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mentu" : 2,
]));

  setup();
}
