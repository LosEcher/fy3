// wuliuqi.c
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("������", ({"wu liuqi", "wu","liuqi"}));
	set("banghui", "��ػ�");
	set("bh_rank","��˳������");
	set("nickname", "��ؤ");
	set("gender", "����");
	set("age", 50);
	set("long", 
		"����Ͻл����������������ġ���ؤ�������棬�����������\n"
		"���ڹپӹ㶫�ᶽ֮ʱ������һʡ�ر������˲���諵�Ȱ����\n"
		"�Ĵ淴�帴��֮־��������ػᣬ��ְ��˳��������\n"
	);

	set("attitude", "peaceful");
	
	set("str", 24);
	set("int", 20);
	set("con", 24);
	set("dex", 20);

	set("kee", 1500);
	set("max_kee", 1500);
	set("gin", 100);
	set("max_gin", 100);
	set("force", 1500);
	set("max_force", 1500);
	set("force_factor", 100);
	
	set("combat_exp", 500000);
	set("score", 30000);
	
	set_skill("force", 90);			// �����ڹ�
	set_skill("huntian-qigong", 90);	// ��������
	set_skill("unarmed", 90);		// ����ȭ��
	set_skill("xianglong-zhang", 80);	// ����ʮ����
	set_skill("dodge", 90);			// ��������
	set_skill("xiaoyaoyou", 95);		// ��ң��
	set_skill("parry", 85);			// �����м�
	set_skill("begging", 50);		// �л�����
	
	map_skill("force", "huntian-qigong");
	map_skill("unarmed", "xianglong-zhang");
	map_skill("dodge", "xiaoyaoyou");
	map_skill("parry", "xianglong-zhang");
	set("chat_chance", 3);
	set("chat_msg", ({
	"�������Ȼ�ſ������������������߽��ߣ���ǻ�ߺ���˭�ԣ���������\n"
	"���������������ζ������¸����̡������Դ��У�������Զ��\n",
	"������˵: ������������Ҫ�������ߴ��кô�����\n",
        "������ͻȻ˵��: �ɰض�֦�����ң��нں黪����ͤ��\n",
        "������ͻȻ˵��: ������ǰ����Ը�����帴���Һ�Ӣ��\n",
	}));
        set("inquiry", ([
		"�½���" :  "�ܶ����ɲ��ں���ô��\n",
		"��ػ�" :  "Ҫ������ػᣬȥ�Ҽ��������ʿ��ɡ�\n",

	]) );

	setup();
	carry_object("/obj/cloth")->wear();
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
        if(ob->query("score")<2000)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n");
        return 1;
}

