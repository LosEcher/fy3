// Room: /u/swordman/yangzhou/muqipu
inherit ROOM;

void create ()
{
  set ("short", "ľ����");
  set ("long", @LONG
����һ��ר��ľ����С�꣬���治��ȴ�����ࡣ����ľ��������Щ
ľ����ľǹ֮�࣬³�ϰ�Ҳ�����й䣬�������¡���˽����˵������
�洫���գ�ȷ˭Ҳû������
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lu" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"beijie",
]));

  setup();
}
