// jinshe.c �����ɾ�

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("��ѩ��", ({"xia xueyi", "xia", "xueyi"}));
	set("nickname", HIY"�����ɾ�"NOR);
	set("gender", "����");
	set("age", 25);
	set("long", 
		"�������˳ơ������ɾ�����һ���ֽܡ�����ѩ�ˡ�\n"
		"������ȫƾ�ö�ʱ��ʱа���˵��Ƕ����������ò�������\n"
		"��˵���������ܲң���Ҳ���ƫ��������\n"
		"���������������˵��ˣ���ɫ���ѿ���\n");
 	set("attitude", "peaceful");
	
	set("str", 100);
	set("int", 20);
	set("con", 30);
	set("dex", 25);

	set("chat_chance", 15);
	set("chat_msg", ({
		"��ѩ��ͻȻ��ݺݵ�˵�����Ƕ����㵽��ΪʲôҪ���ң���\n",
		"��ѩ�����з·�Ҫ���������\n",
                "ͻȻ����ѩ�ˡ��ۡ���һ�����³�һ��ڴ��ڵ�Ѫ��\n",
	}));

	set("inquiry", ([
		"����": "��....��..... \n",
	]));

	set("qi", 10000);
	set("max_qi", 10000);
	set("jing", 5000);
	set("max_jing", 5000);
	set("neili", 9000);
	set("max_neili", 9000);
	set("jiali", 100);
	
	set("combat_exp", 10000000);
	 
	set_skill("force", 200);		// �����ڹ�
	set_skill("huntian-qigong", 200);	// ��������
	set_skill("unarmed", 220);		// ����ȭ��
	set_skill("dodge", 200);		// ��������
	set_skill("parry", 200);		// �����м�
        set_skill("sword", 200);                // ��������
        set_skill("jinshe-jianfa",200);         // ���߽���
	
	map_skill("force", "huntian-qigong");
	map_skill("sword", "jinshe-jianfa");
	map_skill("parry", "jinshe-jianfa");
	
	setup();
	
	carry_object("/clone/misc/cloth")->wear();
        carry_object("/clone/weapon/changjian")->wield();
}

int accept_object(object who, object ob)
{
	object obn;

	if( !who || environment(who) != environment() ) return 0;
	if ( !objectp(ob) ) return 0;
	if ( !present(ob, who) ) return notify_fail("��û�����������\n");

	if (  (string)ob->query("name") != "����")
		    return notify_fail("��ѩ�˲���Ҫ���������\n");
         write(HIY "��ѩ�˽ӹ������������س���ͻȻ����Ȼ���¡� \n" NOR);
         write(HIR "��ѩ���૵����Ƕ�������֪��������⣬��ʵ��������ģ���Ҳ���ں��ġ�\n" NOR);         
         write(HIY "��ѩ��ת��ͷ������˵���Ҹ�������л���أ�\n" NOR);
         write(HIY "����ת��ȥ����Ĭ���������˼����ʲô��\n" NOR);
         write(HIY "��ѩ��ͻȻ�����˺ܴ�����Ƶض���˵���ҿ�\n" NOR);
         write(HIY "��Ҳ���������ˣ������б��ұ�����Ѫ�ġ����߽��ס���\n" NOR);
         write(HIY "������������˵�Ѿ�û��ʲô���ˣ������ȥ�ɡ�\n" NOR);
         write(HIY "��ѩ��̾�˿����������ǳ�������Ҳ�ã���������Ҳ�ã�������ΪҲ�ã�ͨͨ�����޹ء�\n" NOR);
         write(HIY "��ѩ�˻��˻��֣����ˣ���������ˡ�\n" NOR);

	obn = new("/d/city3/wenzai/npc/obj/jianpu");
	obn->move(who);
     destruct(ob);
      return 1;
}